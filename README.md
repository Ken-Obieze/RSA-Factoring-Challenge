# RSA Factoring Challenge

## Introduction
RSA (cryptosystem)
RSA (Rivest–Shamir–Adleman) is a public-key cryptosystem used for secure data transmission. The acronym "RSA" comes from the lastnames of its creators Ron Rivest, Adi Shamir and Leonard Adleman, who publicly described the algorithm in 1977.
In a public-key cryptosystem, the encryption key is public and distinct from a secrete (private) decryption key. An RSA user creates and publishes a public key based on two large prime numbers, along with an auxiliary value. The prime numbers are kept secret. Messages can be encrypted by anyone, via the public key, but can be decoded by the secrete prime numbers.

## Requirements
General
- You can choose the language of your choice.
- OS needs to be Standard Ubuntu 20.04 LTS

## Tasks
### Task 0
Factorize as many numbers as possible into a product of two smaller numbers.

- Usage: factors <file>
	* where <file> is a file containing natural numbers to factor.
	* One number per line
	* You can assume that all lines will be valid natural numbers greater than 1
	* You can assume that there will be no empy line, and no space before and after the valid number
	* The file will always end with a new line
- Output format: n=p*q
	* one factorization per line
	* p and q don’t have to be prime numbers
	* See example
- You can work on the numbers of the file in the order of your choice
- Your program should run without any dependency: You will not be able to install anything on the machine we will run your program on
- Time limit: Your program will be killed after 5 seconds if it hasn’t finish
- Push all your scripts, source code, etc… to your repository
	* we will only run your executable factors


### Task 1
RSA Laboratories states that: for each RSA number n, there exist prime numbers p and q such that

n = p × q. The problem is to find these two primes, given only n.

This task is the same as task 0, except:

* p and q are always prime numbers
* There is only one number in the files
How far can you go in less than 5 seconds?

* Read: RSA Factoring Challenge
