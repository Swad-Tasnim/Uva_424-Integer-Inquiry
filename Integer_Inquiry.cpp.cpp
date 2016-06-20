
#include <bits/stdc++.h>
#define ll unsigned long long int
#define M   10000000

using namespace std;

int main()
{
      string s[105],sum2,temp;
      int n=0;

      int i=0;
      int mx=0;
      while(cin>>s[n])
            {if(s[n]=="0")
              break;

            mx=max(mx,(int)s[n].length());
            n++;
            }

           for(int i=0; i<n; i++)
           {
                 if(mx!=(int)s[i].length())
                 {

                        for(int j=s[i].length()-1;j>=0; j--)
                        {
                             temp.push_back(s[i][j]);

                        }

                        for(int j=0; j<mx-s[i].length(); j++)
                              temp.push_back('0');
                              s[i].clear();
                               reverse(temp.begin(),temp.end());
                 for(int j=0; j<mx; j++)
                   s[i].push_back(temp[j]);
                 }


           }

          int sum=0,c=0;
      for(int i=s[0].length()-1; i>=0; i--)
      {     sum=0;
            for(int j=0; j<n; j++)
            {
                sum+=s[j][i]- '0';


            }
            sum+=c;

            sum2+=char((sum%10) +'0');
            c=sum/10;

      }
      if(c)     //if there's any carry
            sum2+=c+'0';
      reverse(sum2.begin(),sum2.end());
     // if(c)
      //cout<<c;
      cout<<sum2<<endl;
}
