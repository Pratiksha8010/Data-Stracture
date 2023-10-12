
R version 4.3.1 (2023-06-16 ucrt) -- "Beagle Scouts"
Copyright (C) 2023 The R Foundation for Statistical Computing
Platform: x86_64-w64-mingw32/x64 (64-bit)

R is free software and comes with ABSOLUTELY NO WARRANTY.
You are welcome to redistribute it under certain conditions.
Type 'license()' or 'licence()' for distribution details.

  Natural language support but running in an English locale

R is a collaborative project with many contributors.
Type 'contributors()' for more information and
'citation()' on how to cite R or R packages in publications.

Type 'demo()' for some demos, 'help()' for on-line help, or
'help.start()' for an HTML browser interface to help.
Type 'q()' to quit R.

[Previously saved workspace restored]

> f=readline("enter tem in fahrenheit")
enter tem in fahrenheit7.8
> f=integer(f)
> c=(5/9)*(f-32)
> k=(f-32)*(5/9)+273.15
> sprintf("celcius...%f",c)
[1] "celcius...-17.777778" "celcius...-17.777778" "celcius...-17.777778" "celcius...-17.777778" "celcius...-17.777778" "celcius...-17.777778" "celcius...-17.777778"
> printf("%f",f)
Error in printf("%f", f) : could not find function "printf"
> sprintf("kelvin...%f",f)
[1] "kelvin...0.000000" "kelvin...0.000000" "kelvin...0.000000" "kelvin...0.000000" "kelvin...0.000000" "kelvin...0.000000" "kelvin...0.000000"
> 
