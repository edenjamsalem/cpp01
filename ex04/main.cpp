#include <iostream>
#include <fstream>
#include <cstring>

std::streampos  getFileSize(std::ifstream& file)
{
    std::streampos  size;

    file.seekg(0, std::ios::end);
    size = file.tellg();
    file.seekg(0, std::ios::beg);
    return (size);
}

bool readInfileToBuf(char *fileName, std::string& buf)
{
    std::ifstream   infile;
    std::streampos  infileSize;

    infile.open(fileName);
    if (infile.fail())
    {
        std::cerr << fileName << "No such file or directory\n";
        return (0);
    }
    infileSize = getFileSize(infile);
    buf.resize(infileSize);
    infile.read(&buf[0], infileSize);
    infile.close();
    return (1);
}

void replaceStrs(std::string& buf, char *oldStr, char *newStr)
{
    size_t oldIndex;

    while ((oldIndex = buf.find(oldStr)) != std::string::npos)
    {
        buf.erase(oldIndex, strlen(oldStr));
        buf.insert(oldIndex, newStr);
    }
}

bool writeToOutFile(std::string buf, char *fileName)
{
    std::ofstream   outfile;

    outfile.open((std::string(fileName) + ".replace").c_str());
    if (outfile.fail())
        return (0);
    outfile << buf;
    outfile.close();
    return (1);
}

int main(int argc, char **argv)
{
    std::string buf = "";

    if (argc != 4)
    {
        std::cerr << "Incorrect number of args\n";
        return (0);
    }
    if (!readInfileToBuf(argv[1], buf))
        return (1);
    replaceStrs(buf, argv[2], argv[3]);
    if (!writeToOutFile(buf, argv[1]))
        return (1);
}