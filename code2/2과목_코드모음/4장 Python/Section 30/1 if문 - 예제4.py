a, b = 21, 10
if a % 2 == 0:
	if b % 2 == 0:
		print('모두 짝수')
	else:
		print('a : 짝수, b : 홀수')
else:
	if b % 2 == 0:
		print('a : 홀수, b : 짝수')
	else:
		print('모두 홀수')