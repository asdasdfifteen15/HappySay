#include<iostream>
#include<fstream>
#include<random>
#include<string>
#include<filesystem>
namespace fs = std::filesystem;
using namespace std;
int main(){
    int count = 0;
    for (const auto& entry : fs::directory_iterator("./say")) {
        if (entry.is_regular_file() && entry.path().extension() == ".txt") {
            ++count;
        }
    }
    std::random_device rd;               // 用于获得种子(真随机,慢)
    std::mt19937 gen(rd());              // 梅森旋转引擎,32位
    std::uniform_int_distribution<int> dist(1, count);
    ifstream text;

    text.open("./say/"+to_string(dist(gen))+".txt");
    string i;
    if (!text.is_open()) {
        cout << "打开文件失败！" << endl;
        return 1;
    }
    while (getline(text, i)) {
        cout << i << endl;
    }
    return 0;
}