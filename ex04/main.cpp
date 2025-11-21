/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 00:00:00 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/21 11:53:41 by tsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(const std::string& content, const std::string& s1, const std::string& s2)
{
    if (s1.empty())
        return content;

    std::string result;
    size_t pos = 0;
    size_t found = 0;

    while ((found = content.find(s1, pos)) != std::string::npos)
    {
        result.append(content, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }
    result.append(content, pos);

    return result;
}

int main(int argc, char* argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error: cannot open file '" << filename << "'" << std::endl;
        return 1;
    }

    std::string content;
    std::string line;
    while (std::getline(inputFile, line))
    {
        content += line;
        content += "\n";
    }
    inputFile.close();

    std::string result = replaceAll(content, s1, s2);

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: cannot create output file '" << outputFilename << "'" << std::endl;
        return 1;
    }

    outputFile << result;
    outputFile.close();

    std::cout << "File replaced successfully: " << outputFilename << std::endl;
    return 0;
}
