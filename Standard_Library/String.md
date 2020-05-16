## 定义和初始化
```
string s1;
string s2 = "string";//拷贝初始化，长度为6的字符串
string s3(10,'c');//直接初始化
```

## OP
```
istream& getline (istream&& is, string& str, char delim);
getline(std::cin,s);//按行读取,默认'\n' 为终止符号;
s.empty();//空值返回true,否则返回false
s.size();//返回字符串中的个数
//字符串比较，对大小写敏感（== != >= <= < >）
```
## RW
```
using namespace std;
int main()
{
  string s;
  while(getline(cin,s))//文件终止符号EOF（ctrl+Z）出现为停止读取
  {
  if(!s.empty())
    cout<<s<<endl;
  }
  return 0;
}
```
## Notes
```
#include <iostream>
#include <string>
#include <limits>

int main()
{
    std::cout << "Largest int: " << std::numeric_limits<int>::max() << '\n'
              << "Largest string::size_type: " << std::numeric_limits<std::string::size_type>::max() << '\n';

    std::string line(3000000000, ' '); // that's 3,000,000,000 spaces

    int len = line.size();
    std::cout << "The size of my string is " << line.size()
              << " but I used 'int' and now I think the size is really " << len << '\n';
}
//s.size()是一个无符号整型
```


