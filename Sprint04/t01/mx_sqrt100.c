int mx_sqrt(int x) {
  int l  = 0;
  int r = x/2 + 1;
  int m;

  if(x<0) return 0;
  if(x == 1) return 1;

  if(r > 46340)
    r = 46341;
  while(l <= r){
    m = (r - l)/2 + l;
    if(m * m == x)
      return m;
    else if(m * m > x)
      r = m;
    else
      l = m;
    if(l + 1 == r)
      return 0;
  } 
  return 0;
}
