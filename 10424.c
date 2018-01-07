#include<stdio.h>
#include<string.h>
int check(char ch)
{
  return ch-'a'+1;
}
int main()
{

  char name1[10000],name2[10000],low1,low2,temp;
  int i,sum1=0,sum2=0,s1,s2;

  while(gets(name1))
  {
      gets(name2);

      if(strlen(name1)==0)break;

      sum1=0;
      sum2=0;
      s1=0;
      s2=0;
      int len1=strlen(name1);
      int len2=strlen(name2);

      for(i=0;i<len1;i++)
      {
          low1=tolower(name1[i]);
          if(low1>=97&&low1<=123)
          {
              sum1=sum1+check(low1);
          }
      }

     s1=(sum1/10)+(sum1%10);

     label1:
      if (s1>9)
      {
          s1=(s1/10)+(s1%10);
          if(s1>9)
            goto label1 ;
      }

     for(i=0;i<len2;i++)
      {
          low2=tolower(name2[i]);
          if(low2>=97&&low2<=123)
          {
              sum2=sum2+check(low2);
          }
      }

      s2=(sum2/10)+(sum2%10);
      label2:
      if (s2>9)
      {
          s2=(s2/10)+(s2%10);
          if(s2>9)
            goto label2;
      }



      if (s1<=s2)
      {
          double prcnt=(s1*100)/(s2*1.0);
          printf("%.2f %%\n",prcnt);
      }
      else
      {
          double prcnt=(s2*100)/(s1*1.0);
          printf("%.2f %%\n",prcnt);


      }
  }

  return 0;
}
