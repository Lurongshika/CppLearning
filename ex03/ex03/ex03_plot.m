%
%  画圆 x^2 + y^2 <= 1  
%
clear all;
close all;

r = 1;
N = 50;
h = 2*r/N;

fig11 = figure;
hold on;
axis([-r*1.1,r*1.1,-r*1.1,r*1.1]); 
axis square

X = linspace(-r,r,N+1); 
Y = ones(N+1)*inf;
for i = 0 : N
    x = X(i+1);
    for j = 0 : N 
        y = -r + j*h;
        if x*x + y*y <= r*r
            Y(i+1,j+1) = y;
        end
    end
    plot(ones(size(X))*X(i+1),Y(i+1,:),'b*')
end
   
% axis off