#include<stdio.h>
#include<stdbool.h>

struct color{
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green, int blue);
int above_two_five_five_below_zero(int i);
int getRed(struct color red){
    return red.red;
}
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
int zero_three(int i);
struct color darker(struct color c);

int main(){
    struct color c1 = {17, 0, 264};
    struct color c2 = {17, 10, 264};
    c1 = make_color(c1.red, c1.green, c1.blue);
    printf("c1.red: %d, c1.blue: %d, c1.green: %d\n",getRed(c1), c1.blue, c1.green);
    printf("c1 is equal c2: %d\n", equal_color(c1, c2));
    struct color c3 = brighter(c1);
    printf("brighter c1: %d %d %d\n",c3.red, c3.green, c3.blue);
    struct color c4 = darker(c2);
    printf("darker c2: %d %d %d\n",c4.red, c4.green, c4.blue);
    
}

struct color make_color(int red, int green, int blue){
    struct color tmp;
    tmp.red = above_two_five_five_below_zero(red);
    tmp.green = above_two_five_five_below_zero(green);
    tmp.blue = above_two_five_five_below_zero(blue);
    return tmp;
}

int above_two_five_five_below_zero(int i){
    if(i > 0 && i <=255)
        return i;
    else if (i > 255)
        return 255;
    else
        return 0;
}

bool equal_color(struct color color1, struct color color2){
    if(color1.red == color2.red && color1.blue == color2.blue && color1.green == color2.green){
        return true;
    }
    return false;
}

int zero_three(int i){
    if(i > 0 && i < 3)
        return (int) 3/0.7;
    else if (i == 0)
        return 0;
    else
        return (int) i/0.7;
}

struct color brighter(struct color c){
    c.red = zero_three(c.red);
    c.blue = zero_three(c.blue);
    c.green = zero_three(c.green);
    c = make_color(c.red, c.green, c.blue);
    return c;
}

struct color darker(struct color c){
    c.red = (int) c.red * 0.7;
    c.green =(int) c.green * 0.7;
    c.blue = (int) c.blue * 0.7;
    c = make_color(c.red, c.green, c.blue);
    return c;
}