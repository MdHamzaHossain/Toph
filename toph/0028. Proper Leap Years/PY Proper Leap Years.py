y=int(input())

print( "Yes" if (((y%4==0) and (y%100!=0)) or (y%400 == 0) ) else "No")


