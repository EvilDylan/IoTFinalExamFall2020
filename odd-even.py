#!/usr/bin/python

numbers = [5,1,4,8,12,7,9,11,14,32,2,7,12] 
odds = []
evens = []

for i in range(len(numbers)):
    if i%2 == 1:
        odds.append(i)
    else:
        evens.append(i)
print "numbers:"
print numbers
print "odds:"
print odds
print "evens:"
print evens
