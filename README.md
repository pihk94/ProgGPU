# Programmation GPU
## Ly Yannick & Prugniaud Melchior
### MS - DS ENSAE 2020

Sujet : 

Based on a nested Monte Carlo, the students have to simulate the price process F(t,x,j) of a bullet option 
then train a Neural Network (NN) or at least a linear regression how to infer F(t,x,j) 
for speciﬁc values taken by the triplet (t,x,j). 

The price of a bullet option F(t,x,j) = e^−r(T−t)E(X | St = x,It = j), X = (ST −K)+1{IT∈[P1,P2]} withI t =X Ti≤t 1{STi<B} and 

• K, T are respectively the contract’s strike and maturity 

• T0 = 0 < T1 < ... < TM = T = TM+1 is a predetermined schedule 

• barrier B should be bigger than S IT times ∈{P1,...,P2}⊂{0,...,M} 

• r is the risk-free rate and σ is the volatility used in the Black & Scholes model dSt = Strdt + StσdWt, S0 = x0.

The ﬁrst step in this work is to make nested the Monte Carlo simulation developed in this course. 
Using nested Monte Carlo allows to simulate the value of F(t,x,j) for various possible values of (t,x,j) instead of having only the simulation of F(0,x0,0) in a standard Monte Carlo.
In addition to Monte Carlo code already given, the students have also to use the new RNG.cu and RNG.h ﬁles that prepare suﬃcient number of random number genrators for nested Monte Carlo. 
Once the nested Monte Carlo code allows to simulate various realizations of F(Tk,x,j) for (k,x,j) ∈ {0,1,...,M}×R+×{0,1,...,min(k,P2)}, students should use these simulations to train on GPU a NN capable of generating learned realizations of the price F that have the same distribution as the one simulated by nested Monte Carlo.
