s=input();
x=len(s);
lis=[];
up=0;
down=1;
while up<x:
  while down<=x:
    g=s[up:down];
    lis.append(g);
    down=down+1;
  up=up+1;
  down=up+1;
lis.sort();
c=''.join(lis);
m=int(input());
h=0;
for i in range(m):
  p=int(input());
  m=int(input());
  y=((p*g)%m);
  print(c[y]);
  g+=c[y];

