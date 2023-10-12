
> r1=readline("enter redious")
enter redious4.5
> r1=as.integer(r1)
> h=readline("enter height...")
enter height...5.6
> h=integer(h)
> a=2*3.3.14*r1*h+2*3.14*r1*r1
Error: unexpected numeric constant in "a=2*3.3.14"
> a=2*3*3.14*r1*h+2*3.14*r1*r1
> v=3.14*r*r*h
Error: object 'r' not found
> v=3.14*r1*r1*h
> sprint("Aria=%f",a)
Error in sprint("Aria=%f", a) : could not find function "sprint"
> print("Aria=%f",a)
Error in print.default("Aria=%f", a) : invalid printing digits 100
> sprintf("Area=%f",a)
[1] "Area=100.480000" "Area=100.480000" "Area=100.480000" "Area=100.480000" "Area=100.480000"
> sprintf("Volum=%f",v)
[1] "Volum=0.000000" "Volum=0.000000" "Volum=0.000000" "Volum=0.000000" "Volum=0.000000"

