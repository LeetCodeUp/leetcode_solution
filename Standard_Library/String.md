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
    cout<<s<<endl;
  }
  return 0;
}
