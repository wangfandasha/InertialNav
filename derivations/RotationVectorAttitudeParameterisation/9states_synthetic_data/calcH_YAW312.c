t15 = q1*rotErr1*(1.0/2.0);
t16 = q2*rotErr2*(1.0/2.0);
t17 = q3*rotErr3*(1.0/2.0);
t2 = -q0+t15+t16+t17;
t12 = q0*rotErr1*(1.0/2.0);
t13 = q2*rotErr3*(1.0/2.0);
t14 = q3*rotErr2*(1.0/2.0);
t3 = q1+t12+t13-t14;
t6 = q0*rotErr2*(1.0/2.0);
t7 = q1*rotErr3*(1.0/2.0);
t8 = q3*rotErr1*(1.0/2.0);
t4 = q2+t6-t7+t8;
t9 = q0*rotErr3*(1.0/2.0);
t10 = q1*rotErr2*(1.0/2.0);
t11 = q2*rotErr1*(1.0/2.0);
t5 = q3+t9+t10-t11;
t18 = t2*t2;
t19 = t3*t3;
t20 = t4*t4;
t21 = t5*t5;
t22 = t18-t19+t20-t21;
t23 = t3*t4*2.0;
t24 = t2*t5*2.0;
t25 = t23+t24;
t26 = 1.0/(t22*t22);
t27 = 1.0/t22;
t28 = q2*t5;
t29 = q3*t4;
t30 = q1*t2;
t31 = q0*t4;
t32 = q1*t5;
t33 = q3*t3;
t34 = t25*t25;
t35 = t26*t34;
t36 = t35+1.0;
t37 = 1.0/t36;
A0[0][0] = -t37*(t27*(t31+t32+t33-q2*t2)-t25*t26*(t28+t29+t30-q0*t3));
A0[0][1] = -t37*(t27*(t28-t29+t30+q0*t3)-t25*t26*(t31-t32+t33+q2*t2));
A0[0][2] = -t37*(t27*(q0*t2-q1*t3+q2*t4+q3*t5)+t25*t26*(q0*t5+q1*t4+q2*t3-q3*t2));
