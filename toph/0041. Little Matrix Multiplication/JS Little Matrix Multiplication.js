[[a11, a12], [a21 , a22],[b11,b12], [b21, b22]] = [(r=readline),r,r,r].map(e => e().split(" ").map(e1 => +e1));
[c11,c12,c21,c22] = [a11*b11 + a12*b21, a11*b12 + a12*b22, a21*b11+a22*b21, a21 *b12 + a22*b22]
print(c11, c12, c21, c22);