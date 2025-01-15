#e <o.h>
#e <b.h>

#e I 3.14159
#e A_F_E(s) (I * (s) * (s))

#f G
#e T_G_O f("g s d.\n")
#e
#e T_G_O f("g s d.\n")
#f

#f !d(X_E)
#e X_E 50
#f
#e E(x) ((x) * (x))

t n() {
    t s = 5;
    t a = A_F_E(s);
    t m = 10;

    f("a f e e h s %d s %.2f\n", s, a);
    
    T_G_O;
    
    f("e e f %d s %d\n", m, E(m));

    f("e m e s d s %d\n", X_E);

    n 0;
}
