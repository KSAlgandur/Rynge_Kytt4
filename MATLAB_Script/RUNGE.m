

yy=[0 1 1];
tspan= 0:0.01:10;
[t,x]= ode45(@Func,tspan,yy);
plot(t,x);
grid on;
xlabel('Time');
ylabel('Y');
title('Rynge-Kytta 4 th');


function f=Func(t,y)
f=zeros(3,1);
f(1)= y(2)*y(3);
f(2)=-y(1)*y(3);
f(3)=-0.51*y(1)*y(2);
end