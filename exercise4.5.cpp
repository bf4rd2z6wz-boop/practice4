#include <iostream>
int main()
{
    int A, B, C;
    int M, N, K;
   std:: cout<< "Введите размеры первой коробки(A,B,C): ";
   std:: cin >> A >> B >> C;
    std:: cout<< "Введите размеры второй коробки(M,N,K): ";
   std:: cin >> M >> N >> K;
int temp;
   if(A>B)
   {
 temp = A;
  A=B;
  B= temp;
   }
   if(B>C)
   {
 temp = B;
  B=C;
  C= temp;
   }
   if(A>B)
   {
 temp = A;
  A=B;
  B= temp;
   }


    if(M>N)
   {
 temp = M;
  M=N;
  N= temp;
   }
   if(N>K)
   {
 temp = N;
  N=K;
  K= temp;
   }
   if(M>N)
   {
 temp = M;
  M=N;
  N= temp;
   }
   if(A<=M && B<=N && C<=K)
   {
    std:: cout << "Коробка помещается";
   }
   else
   {
    std:: cout << "Коробка не помeщается";
   }
}