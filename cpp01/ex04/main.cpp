
#include <iostream>
#include <fstream>

// #include <iostream>
// #include <string>
 
// int main()
// {
//     std::string s = "C++17";
 
//     std::string x = "17";
//     std::string y = "20";
 
//     size_t pos = 0;
//     while (pos += y.length())
//     {
//         pos = s.find(x, pos);
//         if (pos == std::string::npos) {
//             break;
//         }
 
//         s.replace(pos, x.length(), y);
//     }
 
//     std::cout << s << std::endl;        // C++20
 
//     return 0;
// }

int main(int ac, char **av)
{
    if (ac != 4){
        std::cout << "Useage: <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    std::string     filename = av[1];
    std::string     s1 = av[2];
    std::string     s2 = av[3];
    std::cout << "s1 : " + s1 << ", s2: " + s2 << std::endl;
    if (s1 == s2){
        std::cout << "String is same" << std::endl;
        return (0);
    }
    std::ifstream   infile(filename);
    if (infile.fail()) {
        std::cout << "failed open " << av[1] << std::endl;
        return (1);
    }
    std::ofstream   outfile(filename + ".replace");
    if (outfile.fail()){
        std::cout << "failed open " << filename + ".replace" << std::endl;
        return (1);
    }
    std::string line;
    while (std::getline(infile, line)) {
        size_t  found = 0;
        line += '\n';
        std::cout << "gnl ==" << line << std::endl;
        while ((found = line.find(s1, found)) != std::string::npos) {
            line.erase(found, s1.length());
            line.insert(found, s2);
            found += s2.length();
        }
        if (infile.eof()) {
            line = line.substr(0, line.length() - 1);
            outfile << line;
            break ;
        } else {
            outfile << line;
        }
    }
    return (0);
}
