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

❓Question 4: How many Topics\
➡There are N topics to cover and the ith topic takes Hi hours to prepare (where 1≤i≤N). You have only M days left to prepare, and you want to utilise this time wisely. You know that you can't spend more than S hours in a day preparing, as you get tired after that. You don't want to study more than one topic in a day, and also, don't want to spend more than two days on any topic, as you feel that this is inefficient.\
Can you find the maximum number of topics you can prepare, if you choose the topics wisely? \
➡Input: First line will contain T, number of testcases. Then the testcases follow. The first line of each test case contains three space-separated integers: N, M and S, denoting the number of topics, the number of days remaining and the number of hours you can study in a day. The second line of each test case contains N space-separated integers Hi, denoting the number of hours needed to prepare for the ith topic.\
➡Output: For each testcase, output in a single line: the maximum number of topics you can prepare.

❓Question 5: Chef and his Students\
➡Chef is instructor of the famous course "Introduction to Algorithms" in a famous univerisity. There are n students in his class. There is not enough space in the class room, so students sit in a long hallway in a linear fashion.\
One day Chef was late to class. As a result, some of the students have formed pairs and are talking to each other, while the others are busy studying. This information is given to you by a string s of length n, consisting of characters '*', <' and '>', where '*' denotes that the student is studying, '>' denotes that the corresponding student is talking to the student to the right, and '<' denotes that the corresponding student is talking to the student to the left.\
When the students see their teacher coming, those who were talking get afraid and immediately turn around, i.e. students talking to left have now turned to the right, and the one talking to right have turned to the left. When Chef sees two students facing each other, he will assume that they were talking. A student who is busy studying will continue doing so. Chef will call each pair of students who were talking and punish them. Can you find out how many pairs of students will get punished?\
For example, in case *><*, when students see Chef, their new configuration will be *<>*. Chef sees that no students are talking to each other. So no one is punished. While in case ><><, the new configuration of students will be <><>, Chef sees that student 2 and 3 are talking to each other and they will be punished.\
➡Input: The first line of the input contains an integer T denoting the number of the test cases. Each test case contains a string s denoting the activities of students before students see Chef entering the class.\
➡Output: For each test case, output a single integer denoting the number of pairs of students that will be punished.
