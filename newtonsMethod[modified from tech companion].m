function approximateZero = newtonsMethod( fnc, x0, tol )
%  implementation of Newton's Method for finding a zero of a function
%  requires a symbolic expression, a starting point, and a tolerance as input
%  produces either an input, which when substituted into the given expression,
%  yields an output with absolute value less than the specified tolerance,
%  or a warning message indicated that the tolerance has not been met.

%  Author:  R Smyth
%  Modified by: P Joneja
%  Version: 2.0  10/15/2014

% Since convergence is not guaranteed for Newton's method,
% set a maximum number of iterations.
% Of course we could have let the user control this parameter.
maxNumIter = 5;   
itCounter = 0;  % Initialize iteration counter.

format long

syms fp;   % derivative
fp = diff(fnc);

xcur = x0;
while ( (abs(subs(fnc,xcur))>tol)  &&  (itCounter<maxNumIter) ) 
	xcur = double(xcur - subs(fnc,xcur)/subs(fp,xcur));
    disp(['x' num2str(itCounter) ' is equal to ' num2str(xcur)]);
	itCounter = itCounter+1;
end

if( abs(subs(fnc,xcur))>tol ) 
	disp(['Warning:  Tolerance not met after ' num2str(maxNumIter) ' iterations.']);
end

approximateZero = xcur;
