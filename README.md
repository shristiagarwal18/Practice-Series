# Practice-Series
I practice C++ from different platforms. I will put interesting questions and my code here for my later reference and I feel this will help many others also.\
I have given 10 days challenge to myself in which I will do 1 question of Codechef everyday in C++ language.

❓Question 1: Three Way Communications \
➡The Chef likes to stay in touch with his staff. So, the Chef, the head server, and the sous-chef all carry two-way transceivers so they can stay in constant contact. Of course, these transceivers have a limited range so if two are too far apart, they cannot communicate directly.\
The Chef invested in top-of-the-line transceivers which have a few advanced features. One is that even if two people cannot talk directly because they are out of range, if there is another transceiver that is close enough to both, then the two transceivers can still communicate with each other using the third transceiver as an intermediate device.\
There has been a minor emergency in the Chef's restaurant and he needs to communicate with both the head server and the sous-chef right away. Help the Chef determine if it is possible for all three people to communicate with each other, even if two must communicate through the third because they are too far apart.\
➡Input: The first line contains a single positive integer T ≤ 100 indicating the number of test cases to follow. The first line of each test case contains a positive integer R ≤ 1,000 indicating that two transceivers can communicate directly without an intermediate transceiver if they are at most R meters away from each other. The remaining three lines of the test case describe the current locations of the Chef, the head server, and the sous-chef, respectively. Each such line contains two integers X,Y (at most 10,000 in absolute value) indicating that the respective person is located at position X,Y. \
➡Output: For each test case you are to output a single line containing a single string. If it is possible for all three to communicate then you should output "yes". Otherwise, you should output "no". To be clear, we say that two transceivers are close enough to communicate directly if the length of the straight line connecting their X,Y coordinates is at most R.

❓Question 2: That Is My Score!\
➡You are participating in a contest which has 11 problems (numbered 1 through 11). The first eight problems (i.e. problems 1,2,…,8) are scorable, while the last three problems (9, 10 and 11) are non-scorable ― this means that any submissions you make on any of these problems do not affect your total score.\
Your total score is the sum of your best scores for all scorable problems. That is, for each scorable problem, you look at the scores of all submissions you made on that problem and take the maximum of these scores (or 0 if you didn't make any submissions on that problem); the total score is the sum of the maximum scores you took.\
You know the results of all submissions you made. Calculate your total score.\
➡Input: The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.\
The first line of each test case contains a single integer N denoting the number of submissions you made.\
N lines follow. For each i (1≤i≤N), the i-th of these lines contains two space-separated integers pi and si, denoting that your i-th submission was on problem pi and it received a score si.\
➡Output: For each test case, print a single line containing one integer ― your total score.

❓Question 3: Chef and Subarrays\
➡Chef likes problems involving arrays. Unfortunately, the last one he tried to solve didn't quite get solved.\
Chef has an array A of N positive numbers. He wants to find the number of subarrays for which the sum and product of elements are equal.
Please help Chef find this number.\
➡Input: The first line of input contains an integer T denoting the number of test cases. T test cases follow. The first line of each test contains the integer N. The next line contains N integers — A1, A2, ..., AN — denoting the array.\
➡Output: For each test case, output a single line with the answer for the instance.\
➡Constraints: \
1 ≤ T ≤ 50 \
1 ≤ n ≤ 50 \
1 ≤ Ai ≤ 109 \
A1 * A2 * ... * An ≤ 109
