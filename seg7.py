#!/usr/bin/python3
from gpiozero import LED
from time import sleep
# from random import seed
from random import seed, randint
from datetime import datetime
# seed random number generator
seed(datetime.now())
leda=LED(26)
ledb=LED(12)
ledc=LED(20)
ledd=LED(21)
lede=LED(13)
ledf=LED(19)
ledg=LED(16)
leddp=LED(5)
mylist=[]
thelist=[]
for i in range(5):
	x=randint(0,9)
	x=int(x)
	num=str(x)
	mylist.append(num)
	leda.off()
	ledb.off()
	ledc.off()
	ledd.off()
	lede.off()
	ledf.off()
	ledg.off()
	leddp.off()
	
	if num == "0":
		leda.on()
		ledb.on()
		ledc.on()
		ledd.on()
		lede.on()
		ledf.on()
	if num == "1":
		ledc.on()
		ledb.on()
	if num == "2":
		leda.on()
		ledb.on()
		ledg.on()
		lede.on()
		ledd.on()
	if num == "3":
		leda.on()
		ledb.on()
		ledg.on()
		ledc.on()
		ledd.on()
	if num == "4":
		ledf.on()
		ledg.on()
		ledb.on()
		ledc.on()
	if num == "5":
		leda.on()
		ledf.on()
		ledg.on()
		ledc.on()
		ledd.on()
	if num == "6":
		leda.on()
		ledc.on()
		ledd.on()
		lede.on()
		ledf.on()
		ledg.on()
	if num == "7":
		leda.on()
		ledb.on()
		ledc.on()
	if num == "8":
		leda.on()
		ledb.on()
		ledc.on()
		ledd.on()
		lede.on()
		ledf.on()
		ledg.on()
	if num == "9":
		leda.on()
		ledb.on()
		ledc.on()
		ledf.on()
		ledg.on()
	sleep(0.2)
leda.off()
ledb.off()
ledc.off()
ledd.off()
lede.off()
ledf.off()
ledg.off()
#print(mylist)
answer=input('Enter your answer:')
for i in answer:
	thelist.append(str(i))
#print(thelist)
if (mylist == thelist):
	print('Winner!')
else:
	print('loser!')
