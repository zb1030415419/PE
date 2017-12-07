### Note
> triangle could be (odd,odd,even) and (even,even,odd)
> First we try to calculate the first type
> we have two subtype of this type triangle
> 1. (2n+1,2n+1,2n) 
> 2. (2n+1,2n+1,2n+2)
>
> to make the area to be integer we need to let h=to be an integer
> 1. n(3n+2) to be a perfect square
> 2. (n+1)(3n+1) to be a perfect square
>
> Because of (n,3n+2)=(n,2) we may get a efficient conclusion that gcd(n,3n+2) could be either 1 or 2 and it is depend on the value of n
> if n=2t then n(3n+2) = 2^2(t(3t+1)) and (t,3t+1)=1 and n(3n+2) is a perfect square so ,t and 3t+1 should both be perfect square 
> Just enumerate t is ok!
> (n+1,3n+1)=(n+1,-2)=(n+1,2) and is the same to above
> Now we consider the second type 
> this time we must guarantee the h = 2k
> 1. (2n,2n,2n-1)
> 2. (2n,2n,2n+1)
> 
> (3n-1/2)(n+1/2)=3n^2+n-1/4 because n is an integer then h couldn't be a integer 
> So we just ingore this type of triangle
