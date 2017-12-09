### Note:
> This problem seems to have no good idea at first,so try to enumerate the small case!
> We try to use a bruteforce algorithm to enumerata the situation
> first we takes O($n^4$) to enumerate a,b,c,d
> Then a,b,c,d has 4!=24 permutation and each permutation map to a calculate sequence 
> because we have 3 operations in the sequence and each operation could be 4 choice 
> Oops do not forget the situtation (a op b)op (c op d)
> Then the time complexity should be $3072n^4$
> Because the sup is 9
> So just do it!
