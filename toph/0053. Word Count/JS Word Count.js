(r=readline);
let j,c={}
while(j=r()) j.split(" ").map(e => (e=e.trim(),c[e]? c[e]++:c[e]=1));
print(Object.entries(c).sort((a,b)=> b[1] - a[1])[0][0])