import math
import os
import random
import re
import sys



x= int(input(""))

if x%2 >0:
    print "Weird"

if x%2==0 and x>=2 and x<=5:
    print "Not Weird"

if x%2==0 and x>=6 and x<=20:
    print "Weird"

if x%2==0 and x>=20:
    print "Not Weird"

