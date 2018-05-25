#include<iostream>
int main()
{
long out[2],i=0;
while(i<2)
{
char w[23];
std::cin>>w;
out[i]=1;
for(int j=0;j<23;j++)
if(w[j]=='T'||w[j]=='D'||w[j]=='L'||w[j]=='F')
out[i]*=2;
i++;
}
for(i=0;i<2;i++)
std::cout<<out[i]<<'\n';
}