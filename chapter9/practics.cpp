// # include <stdio.h>
// double min(double x, double y); // exercise 1
// void cline(char ch, int i, int j); // exercise 2
// void func4exercise3(char ch, int i, int j); // exercise 3
// void use_func4exercise3(char ch, int i, int j);  // exercise 3
// void larger_of(double * x, double * y);
// double func4exercise4(double x, double y);


// int main(void){
//     double e1x=10.0, e1y=8.1;
//     double o1;
//     char e3ch = 's';
//     int e3i=5, e3j=6;
//     double e4x=2.0, e4y=1.0;
//     double o4;
//     o1 = min(e1x, e1y);
//     printf("output for exercise 1 is %lf\n", o1);
//     func4exercise3(e3ch, e3i, e3j);
//     o4 = func4exercise4(e4x, e4y);
//     printf("output for exercise 4 is %lf\n", o4);
//     return 0;
// }


// double min(double x, double y)
// {
//     double smaller;
//     smaller = (x > y)? y: x;
//     return smaller;
// }

// void cline(char ch, int i, int j)
// {
    
// }

// void func4exercise3(char ch, int i, int j)
// {
//     for (int a = 0; a < i; a++){
//         for (int b = 0; b < j; b++){
//             printf("%c", ch);
//         }
//         printf("\n");
//     }
//     return;
// }

// void use_func4exercise3(char ch, int i, int j)
// {
//     return;
// }

// // void larger_of(double * x, double * y)
// // {
// //     double x_value, y_value, larger_value;
// //     x_value = &x;  // 不知道怎么使用sign的索引呢
// //     y_value = &y;  // 不知道怎么使用error呢
// //     larger_value = (x_value > y_value)? x_value:y_value;
// //     return;
// // }

// double func4exercise4(double x, double y)
// {
//     double output = 0.0;  // default value for error input
//     double reverse_x, reverse_y;
//     if (x == 0.0 || y == 0.0){
//         printf("x and y should not be zero!\n");
//         return output;
//     }
//     else{
//         reverse_x = 1 / x;
//         reverse_y = 1 / y;
//         if  (reverse_x + reverse_y == 0){
//             printf("sum of reverse of x and  reverse of y should not be zero\n");
//             return output;
//         }
//         else{
//             output = 1 / (reverse_x + reverse_y);
//             return output;
//         }
//     } 
// }
