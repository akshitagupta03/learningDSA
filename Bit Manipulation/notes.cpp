// XOR operator (^)
// removes any duplicates 



// right shift operator (>>)
// shifts binary bits to the right by number specified
// 5 = 0101
// 5 >> 1 = 0010
// 5 >> 2 = 0001



// left shift operator (<<)
// shifts binary bits to the left by number specified
// 5 = 0101
// 5 << 1 = 1010
// 5 << 2 = 10100



// every integer occurs twice in this array and one integer occurs once
// print the integer that only occurs once
// int arr[] = {2, 1, 2, 5, 6, 5, 7, 7, 6};
// int xor=0;
// for(int i=0; i<n; i++){
//     xor = xor^arr[i];
// }
// cout << xor << endl; // gives the single number
// as XOR of identical numbers is 0



// swapping two numbers using xor (no third variable)
// int a = 5;
// int b = 7;
// a = a^b;    // a = 5^7
// b = a^b;    // b = 5^7^7 = 5
// a = a^b;    // a = 5^5^7 = 7



// given n, print the xor of all numbers between 1 to n
// if input is 5, output should be 1^2^3^4^5

// int n;
// cin >> n;
// int xor=0;
// for(int i=1; i<n; i++){
//     xor = xor^i;
// }
// cout << xor << endl;

// without using for loop logic
// n=1     1  (1)
// n=2     3  (1^2)
// n=3     0  (3^3)
// n=4     4  (0^4)
// n=5     1  (4^5)
// n=6     7  (1^6)
// n=7     0  (7^7)
// n=8     8  (0^8)
// if(n%4 == 0){
//     cout << n << endl;
// }
// if(n%4 == 1){
//     cout << 1 << endl;
// }
// if(n%4 == 2){
//     cout << (n+1) << endl;
// }
// if(n%4 == 3){
//     cout << 0 << endl;
// }



// given a range (l-r) print xor 
// l^l+1^l+2^......^r-1^r
// l=2, r=4 output should be 2^3^4

// xor(1-l), xor(1-r)
// suppose we have l=3, r=6
// xor(2) = 1^2
// xor(6) = 1^2^3^4^5^6
// xor(2) ^ xor(6) = 3^4^5^6

// xor(r) ^ xor(l-1) 



// and operator question
// if n is given, check if n is even or odd
// if(n&1 == 0){
//     even;
// }
// else{
//     odd;
// }



// and operator question
// (n, i) given
// check if i'th bit is set or not

// mask & n != 0 
//     yes
// else
//     no
// mask = 1 << i;
// bool set = (mask & n);



// set the i'th bit of a number
// mask = 1 << i;
// n = (mask | n);



// clear the i'th bit
// mask = ~(1 << i);
// n = (mask & n);



// remove the last set bit
// 110110 -> 110100
// n = n & (n-1);



// how to check if a number is a power of 2
// if(n & (n-1) == 0)
//     yes;



// count number of set bits

// while(n!=0){
//     if(n&1 == 1){
//         count++;
//     }
//     n = n >> 1;
// }
// cout << count;

// alternate solution (slightly more optimal)
// while(n != 0){
//     n = n&(n-1);
//     count++;
// }
// cout << count;
