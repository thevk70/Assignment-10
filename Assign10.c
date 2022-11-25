// 1. Write a function to calculate the area of a circle. (TSRS)
// #include <stdio.h>
// float Circle_Area(float a)
// {
//     return 3.14*a*a;
// }
// int main()
// {
//     float r;
//     printf("Enter the radius of circle:: ");
//     scanf("%f",&r);
//     printf("Area of circle = %.2f",Circle_Area(r));
//     return 0;
// }

// 2. Write a function to calculate simple interest. (TSRS)
// #include <stdio.h>
// float SI(float p,float r,int t)
// {
//     float si = (p*r*t)/100;
//     return si;
// }
// int main()
// {
//     float p,r;
//     int t;
//     printf("Enter the value of p,r and t:: ");
//     scanf("%f %f %d",&p,&r,&t);
//     printf("Simple Interest = %.2f",SI(p,r,t));
//     return 0;
// }

// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
// #include <stdio.h>
// int Odd_Even(int n)
// {
//    if (n&1)  return 0; else return 1;
// }
// int main()
// {
//     int num;
//     printf("Enter Number:: ");
//     scanf("%d",&num);
//     printf("%d",Odd_Even(num));
//     return 0;
// }

// 4. Write a function to print first N natural numbers (TSRN)
// #include <stdio.h>
// void first_nat(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d\n",i);
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d",&num);
//     first_nat(num);
//     return 0;
// }

// 5. Write a function to print first N odd natural numbers. (TSRN)
// #include <stdio.h>
// void First_odd(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         (i&1) ? printf("%d\n",i) : printf("");
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d",&num);
//     First_odd(num);
//     return 0;
// }

// 6. Write a function to calculate the factorial of a number. (TSRS)
// #include <stdio.h>
// int fact(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int main()
// {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d",&num);
//     printf("Factorial of %d is %d.",num,fact(num));

//     return 0;
// }

// 7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)
//c = n!/r!*(n-r)!
// #include <stdio.h>
// int fact(int n)
// {
//     int fact = 1;
//     if (n==1 || n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             fact = fact * i;
//         }
//     }
//     return fact;
// }
// int Comb(int n,int r)
// {
//    return fact(n)/(fact(r)*fact(n-r));
// }
// int main()
// {
//     int n1,n2;
//     printf("Enter the value of 'n' nad 'r':: ");
//     scanf("%d %d",&n1,&n2);
//     printf("Combination = %d",Comb(n1,n2));
//     return 0;
// }

// 8. Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)
//NpR = n!/r!;
// #include <stdio.h>
// int fact(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int Arrange(int n, int r)
// {
//    return fact(n)/fact(r);
// }
// int main()
// {
//     int n1,n2;
//     printf("Enter Two numbers:: ");
//     scanf("%d %d",&n1,&n2);
//     printf("Arrangement = %d",Arrange(n1,n2));
//     return 0;
// }

// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
//  #include <stdio.h>
//  void check(int n,int d)
//  {
//      int res,flag=0;
//      for (int i = 1; n > 0; i++)
//      {
//          res = n%10;
//          n = n/10;
//          if (res==d)
//          {
//             flag++;
//             break;
//          }
//      }
//      (flag==1) ?  printf("Yes, Given number contain %d.",d) :  printf("No, Given number does't contain %d.",d);
//  }
//  int main()
//  {
//      int num,dig;
//      printf("Enter a number and a digit:: ");
//      scanf("%d %d",&num,&dig);
//      check(num,dig);
//      return 0;
//  }

// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)
// #include <stdio.h>
// void primeFact(int n)
// {
//     for (int i = 2; i <= n; i++)
//     {
//         while (n%i == 0)
//         {
//             printf("%d ",i);
//             n = n/i;
//         }
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d",&num);
//     primeFact(num);
//     return 0;
// }