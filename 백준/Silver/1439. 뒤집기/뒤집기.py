s = input()
s0 = s.split('0')
s1 = s.split('1')


a = len(s0)-s0.count('')
b= len(s1)-s1.count('')
print(min(a,b))