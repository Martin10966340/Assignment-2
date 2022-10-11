#include <iostream>
using namespace std;

int main (){
	
	int isprime = 1, count, x, num=3, sum=2;
	if(100>=1)


{


for (count=2; count<=100;)

{
	
	for(i=2;i<=num-1; i++)
{


if (num% i==0)

{


isprime =0;
break;

}
}

if(isprime)

	sum += num;
	count ++;

}
	isprime = 1;
	num++
}

}
cout << "The sum of first" << 100 <<" prime numbers is "<<sum;

return 0;

}