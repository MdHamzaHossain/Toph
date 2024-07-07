[h,m]=readline().split(" ");
a=(60*(+h)-11*(+m))/2;
console.log(a > 180 ? 360-a: a)