# lab1
## g++ -o lab1 lab1.cpp
<pre>
.
.
.

namespace std __attribute__ ((__visibility__ (&quot;default&quot;)))
{

# 60 &quot;/usr/include/c++/7/iostream&quot; 3
  extern istream cin;
  extern ostream cout;
  extern ostream cerr;
  extern ostream clog;


  extern wistream wcin;
  extern wostream wcout;
  extern wostream wcerr;
  extern wostream wclog;




  static ios_base::Init __ioinit;


}
# 2 &quot;lab1.cpp&quot; 2

# 2 &quot;lab1.cpp&quot;
using namespace std;

int main(){
 int n=0;
 cin&gt;&gt;n;
 while(1){
  cout&lt;&lt;n&lt;&lt;endl;
  if(n==1) break;
  if(n%2) n=3*n+1;
  else n=n/2;
 }
 return 0;

}
</pre>
