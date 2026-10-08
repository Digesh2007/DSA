// unit 1 code file 1


// #include <stdio.h>
// int main()
//  {
//     printf("we will test AO, pls enter 2-numbers\n");
//     float num1,num2,result;
//     scanf("%f %f",&num1,&num2);
//     result=(num1+num2);
//     printf("add == %f\n",result);
//     result=(num1-num2);
//     printf("sub == %f\n", (result));
//     result=(num1*num2);
//     printf("mul == %f\n", (result));
//     result=(num1/num2);
//     printf("div == %f\n", (result));
//     result=(num1/num2);
//     printf("mod == %f\n", (result));
//     return 0;
// }








//Switch Case & Variables & Data Types
//Application as a Calci


//
//// #include <stdio.h>
//// int main()
////  {
////  	printf("******welcome to my calci app****\n\n"); 	
////     printf("we will test AO, pls enter 2-numbers\n");
////     float num1,num2,result;
////     scanf("%f %f",&num1,&num2);
////     printf("here are ur choices\n 1. Add \n 2. sub \n 3. Mul\n 4. Div\n 5. Mod\n ");
//// 	int choice1;	
////     printf("ps s enter ur choice\n");
////     scanf("%d",&choice1); 
//// 	switch(choice1)		
// 		{
// 			case 1:				
// 				result=(num1+num2);
// 				printf("add == %f\n",result);
// 				break;
// 			case 2:				
// 				result=(num1-num2);
// 				printf("sub == %f\n", (result));
// 				break;
// 			case 3:				
// 				result=(num1*num2);
// 				printf("mul == %f\n", (result));
// 				break;
// 			case 4:
// 				result=(num1/num2);
// 				printf("div == %f\n", (result));
// 				break;
// 			case 5:
// 				result=(num1/num2);
// 				printf("mod == %f\n", (result));
// 				break;
// 			default:
// 				printf("wrong choice try again\n");	
// 				break;		
// 		}  

//     return 0;
// }





// pointers, Expl-1, not getting required output.



// #include <stdio.h>
// void main()
// {
// 	int X=10;
// 	int *p1=&X;
// 	printf("hello pointer\n");
// 	printf(" value of X == %d\n",X);
// 	printf(" value of p1 == %d\n",p1);
	
	
// 	int **p2=&p1;
// 	printf("hello pointer\n");
// 	printf(" value of X == %d\n",X);
// 	printf(" value of p1 == %d\n",p1);
// 	printf(" address of p1 == %f\n",&p1);
// 	printf("value of p2 == %f\n",p2);
// 	printf("address of p2 == %f\n",&p2);
	
	
// }


//1.TSRS

// #include<stdio.h>
// int f1(int x,int y)//Def of a fun
// {	
// 	return (x*y);
// }
// void main()
// {
// 	printf("test TSRS function code\n");
// 	printf("pls enter 2-values for multiplication\n");
// 	int a,b;
// 	scanf("%d %d",&a, &b);
// 	printf("result of multiplication === %d",f1(a,b));// f1(a,b) -- calling of a fun
	
// }





// #include<stdio.h>
// int f1(int x,int y);
// void main()
// {
// 	printf("test TSRS function code\n");
// 	printf("pls enter 2-values for multiplication\n");
// 	int a,b;
// 	scanf("%d %d",&a, &b);
// 	printf("result of multiplication === %d",f1(a,b));// f1(a,b) -- calling of a fun
	
// }
// int f1(int x,int y)//Def of a fun
// {	
// 	return (x*y);
// }







////2. TSRN
// #include<stdio.h>
// void f1(int x,int y)//Def of a fun
// {	
// 	printf("result == %d",(x*y));
// }
// void main()
// {
// 	printf("test TSRS function code\n");
// 	printf("pls enter 2-values for multiplication\n");
// 	int a,b;
// 	scanf("%d %d",&a, &b);
// 	f1(a,b);// f1(a,b) -- calling of a fun	
// }








//4. TNRS
// #include<stdio.h>
// int f1()//Def of a fun
// {	
// 	printf("pls enter 2-values for multiplication\n");
// 	int a,b,result;
// 	scanf("%d %d",&a, &b);		
// 	return (a*b);
// }
// void main()
// {
// 	printf("test TSRS function code\n");
// 	printf("result of multiply == %d",f1());
// }





//************************
/// malloc()/calloc()/realloc()/free()

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i;
//     int *ptr;
//     // 1. malloc() - allocate memory
//     ptr = (int *)malloc(3 * sizeof(int));
//     printf("Enter 3 numbers:\n");
//     for(i = 0; i < 3; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }
//     printf("\nNumbers after malloc():\n");
//     for(i = 0; i < 3; i++)
//     {
//         printf("%d ", ptr[i]);
//     }

//     // 2. calloc() - allocate and initialize memory
//     int *arr;
//     arr = (int *)calloc(3, sizeof(int));

//     printf("\n\nValues after calloc():\n");
//     for(i = 0; i < 3; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// //
//     // 3. realloc() - increase memory size
//     ptr = (int *)realloc(ptr, 5 * sizeof(int));

//     printf("\n\nEnter 2 more numbers:\n");
//     for(i = 3; i < 5; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }

//     printf("\nNumbers after realloc():\n");
//     for(i = 0; i < 5; i++)
//     {
//         printf("%d ", ptr[i]);
//     }

//     // 4. free() - release memory
//     free(ptr);
//     free(arr);

//     printf("\n\nMemory released using free().");

//     return 0;
// }



////************************
///// malloc()/calloc()/realloc()/free()
//with Function



// #include <stdio.h>
// #include <stdlib.h>
// void DynMem()
// {
	
//     int i;
//     int *ptr;
//     // 1. malloc() - allocate memory
//     ptr = (int *)malloc(3 * sizeof(int));
//     printf("Enter 3 numbers:\n");
//     for(i = 0; i < 3; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }
//     printf("\nNumbers after malloc():\n");
//     for(i = 0; i < 3; i++)
//     {
//         printf("%d ", ptr[i]);
//     }
//     // 2. calloc() - allocate and initialize memory
//     int *arr;
//     arr = (int *)calloc(3, sizeof(int));

//     printf("\n\nValues after calloc():\n");
//     for(i = 0; i < 3; i++)
//     {
//         printf("%d ", arr[i]);
//     }//
//     // 3. realloc() - increase memory size
//     ptr = (int *)realloc(ptr, 5 * sizeof(int));
//     printf("\n\nEnter 2 more numbers:\n");
//     for(i = 3; i < 5; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }
//     printf("\nNumbers after realloc():\n");
//     for(i = 0; i < 5; i++)
//     {
//         printf("%d ", ptr[i]);
//     }

//     // 4. free() - release memory
//     free(ptr);
//     free(arr);

//     printf("\n\nMemory released using free().");
// }
// int main()
// {
// 	DynMem();
//     return 0;
// }




//with parameterized Function
//TSRN
// #include <stdio.h>
// #include <stdlib.h>
// void DynMem(int n)
// {
	
//     int i;
//     int *ptr;
//     // 1. malloc() - allocate memory
//     ptr = (int *)malloc(n * sizeof(int));
//     printf("Enter 3 numbers:\n");
//     for(i = 0; i < n; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }
//     printf("\nNumbers after malloc():\n");
//     for(i = 0; i < n; i++)
//     {
//         printf("%d ", ptr[i]);
//     }
//     // 2. calloc() - allocate and initialize memory
//     int *arr;
//     arr = (int *)calloc(n, sizeof(int));

//     printf("\n\nValues after calloc():\n");
//     for(i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }//
//     // 3. realloc() - increase memory size
//     ptr = (int *)realloc(ptr, (n+2) * sizeof(int));
//     printf("\n\nEnter 2 more numbers:\n");
//     for(i = n; i < (n+2); i++)
//     {
//         scanf("%d", &ptr[i]);
//     }
//     printf("\nNumbers after realloc():\n");
//     for(i = 0; i < (n+2); i++)
//     {
//         printf("%d ", ptr[i]);
//     }

//     // 4. free() - release memory
//     free(ptr);
//     free(arr);

//     printf("\n\nMemory released using free().");
// }
// int main()
// {
// 	int num;
// 	printf("pls enter a num for range or size\n");
// 	scanf("%d",&num);
// 	DynMem(num);
//     return 0;
// }





// working with static size of an array, example-1
// #include<stdio.h>
// void main()
// {
// 	int x[5],i;
// 	for(i=0;i<5;i++)
// 	{
// 		printf("pls enter 5 values for the Array index\n");
// 		scanf("%d",&x[i]);
// 		printf("ur entered value at [%dth] index == %d\n",i,x[i]);
// 	}
// }





////// 1. Static array
// #include<stdio.h>
// void main()
// {
// 	int arr1[5],i;
	
// 	for(i=0;i<5;i++)
// 	{
// 		printf("pls enter the value for %dth position\n",i);
// 		scanf("%d",&arr1[i]);
// 	}
// 	for(i=0;i<5;i++)
// 	{
// 		printf("entered value at %dth position == %d\n",i,arr1[i]);
		
// 	}
// }




// 2. Static array,searching an element
// #include<stdio.h>
// void main()
// {
// 	int arr1[5],i;
	
// 	for(i=0;i<5;i++)
// 	{
// 		printf("pls enter the value for %dth position\n",i);
// 		scanf("%d",&arr1[i]);
// 	}
	
// 	//searching
// 	printf("pls enter a elem to search from the array\n");
// 	int elem1;
// 	scanf("%d",&elem1);
// 	for(i=0;i<5;i++)
// 	{
		
// 		if(elem1==arr1[i])
// 		{
// 			printf("searched value at %dth position == %d\n",i,arr1[i]);
// 			break;
// 		}
// //		else
// //		printf("search elem is not found at%dth index of array\n",i);
		
// 	}
// }





// 3. static to dynamic  array
//ptr = malloc(num * sizeof *ptr);
// #include<stdio.h>
// #include <stdlib.h>
// void main()
// {
// 	int *arr1,i,num;
// 	printf("pls enter a size for the array\n");
// 	scanf("%d",&num);
// 	arr1 = malloc(num * sizeof *arr1);
	
// 	for(i=0;i<5;i++)
// 	{
// 		printf("pls enter the value for %dth position\n",i);
// 		scanf("%d",&arr1[i]);
// 	}
// 	for(i=0;i<5;i++)
// 	{
// 		printf("entered value at %dth position == %d\n",i,arr1[i]);		
// 	}
// }






// 4. static to dynamic  array, also searching from the array
//ptr = malloc(num * sizeof *ptr);
// #include<stdio.h>
// #include <stdlib.h>
// void main()
// {
// 	int *arr1,i,num;
// 	printf("pls enter a size for the array\n");
// 	scanf("%d",&num);
// 	arr1 = malloc(num * sizeof *arr1);
	
// 	for(i=0;i<5;i++)
// 	{
// 		printf("pls enter the value for %dth position\n",i);
// 		scanf("%d",&arr1[i]);
// 	}
	
// 	//searching
// 	printf("pls enter a elem to search from the array\n");
// 	int elem1;
// 	scanf("%d",&elem1);
// 	for(i=0;i<5;i++)
// 	{
		
// 		if(elem1==arr1[i])
// 		{
// 			printf("searched value at %dth position == %d\n",i,arr1[i]);
// 			break;
// 		}
// //		else
// //		printf("search elem is not found at%dth index of array\n",i);
		
// 	}
// }





//// static to dynamic  array, also searching from the array, also deletion

//#include<stdio.h>
//#include <stdlib.h>
//void main()
//{
//	int *arr1,i,num;
//	printf("pls enter a size for the array\n");
//	scanf("%d",&num);
//	arr1 = malloc(num * sizeof *arr1);
//	
//	for(i=0;i<num;i++)
//	{
//		printf("pls enter the value for %dth position\n",i);
//		scanf("%d",&arr1[i]);
//	}
//	
//	//searching
//	printf("pls enter a elem to search from the array\n");
//	int elem1;
//	scanf("%d",&elem1);
//	for(i=0;i<num;i++)
//	{
//		
//		if(elem1==arr1[i])
//		{
//			printf("searched value at %dth position == %d\n",i,arr1[i]);
//			break;
//		}
//		else
//		printf("search elem is not found at%dth index of array\n",i);		
//	}
//	
//	
//	//deletion position
//    printf("\npls enter position want to delete from the array\n");
//    int pos;
//    scanf("%d",&pos);    
//    for(i = pos; i < (num-1); i++)
//    {        
//           arr1[i] = arr1[i + 1];    	
//    }       
//    arr1 = (int *)realloc(arr1, (num-1) * sizeof(int));
//    num--;
//    // Display array after deletion
//    printf("\nArray after deletion:\n");
//    for (i = 0; i < num; i++)
//    {
//        printf("%d ", arr1[i]);
//    }	
//	
//}





//// 5. static to dynamic  array, also searching from the array, also deletion
////ptr = malloc(num * sizeof *ptr);
// #include<stdio.h>
// #include <stdlib.h>
// void main()
// {
// 	int *arr1,i,num;
// 	printf("pls enter a size for the array\n");
// 	scanf("%d",&num);
// 	arr1 = malloc(num * sizeof *arr1);
	
// 	for(i=0;i<num;i++)
// 	{
// 		printf("pls enter the value for %dth position\n",i);
// 		scanf("%d",&arr1[i]);
// 	}
	
// 	//searching
// 	printf("pls enter a elem to search from the array\n");
// 	int elem1;
// 	scanf("%d",&elem1);
// 	for(i=0;i<5;i++)
// 	{
		
// 		if(elem1==arr1[i])
// 		{
// 			printf("searched value at %dth position == %d\n",i,arr1[i]);
// 			break;
// 		}
// //		else
// //		printf("search elem is not found at%dth index of array\n",i);
		
// 	}
	
	
// 	//deletion position
//     printf("\npls enter position want to delete from the array\n");
//     int pos;
//     scanf("%d",&pos);    
//     for(i = pos; i < (num-1); i++)
//     {        
//           arr1[i] = arr1[i + 1];    	
//     }       
//     arr1 = (int *)realloc(arr1, (num-1) * sizeof(int));
//     num--;
//     // Display array after deletion
//     printf("\nArray after deletion:\n");
//     for (i = 0; i < num; i++)
//     {
//         printf("%d ", arr1[i]);
//     }	
	
// }





//// Example-1, malloc()
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i;
//     int *ptr;
//     // 1. malloc() - allocate memory
//     ptr = (int *)malloc(3 * sizeof(int));
//     printf("Enter 3 numbers:\n");
//     for(i = 0; i < 3; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }
//     printf("\nNumbers after malloc():\n");
//     for(i = 0; i < 3; i++)
//     {
//         printf("%d ", ptr[i]);
//     }
// }






// Example-2, malloc(), for Dynamic size
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i,num;
//     int *ptr;
//     printf("pls enter a num for the sixe\n");
//     scanf("%d",&num);
//     // 1. malloc() - allocate memory
//     ptr = (int *)malloc(num * sizeof(int));
//     printf("Enter %d numbers:\n",num);
//     for(i = 0; i < num; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }
//     printf("\nNumbers after malloc():\n");
//     for(i = 0; i < num; i++)
//     {
//         printf("%d ", ptr[i]);
//     }
// }







// example-4, All in one
 #include <stdio.h>
 #include <stdlib.h>
 int main()
 {
     int i,num;
     int *ptr;
     printf("pls enter a num for the array size\n");
     scanf("%d",&num);
//      1. malloc() - allocate memory
     ptr = (int *)malloc(num * sizeof(int));
     printf("Enter %d numbers:\n",num);
     for(i = 0; i < num; i++)
     {
         scanf("%d", &ptr[i]);
     }
     printf("\nNumbers after malloc():\n");
     for(i = 0; i < num; i++)
     {
         printf("%d ", ptr[i]);
     }

//     2. calloc() - allocate and initialize memory
     int *arr;
     arr = (int *)calloc(num, sizeof(int));

     printf("\n\nValues after calloc():\n");
     for(i = 0; i < num; i++)
     {
         printf("%d ", arr[i]);
     }
 
//     3. realloc() - increase memory size
      ptr = (int *)realloc(ptr, (num+2) * sizeof(int));
       printf("\n\nEnter 2 more numbers:\n");
       for(i =num; i < (num+2); i++)
      {
         scanf("%d", &ptr[i]);
       }

     printf("\nNumbers after realloc():\n");
     for(i = 0; i < (num+2); i++)
     {
         printf("%d ", ptr[i]);
     }

//      4. free() - release memory
      free(ptr);// free by malloc
      free(arr);//free by calloc

      printf("\n\nMemory released using free().");

      return 0;
   }






