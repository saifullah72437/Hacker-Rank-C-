

/*
 * Create classes Rectangle and RectangleArea
 */

/* Rectangle Area in C++ - Hacker Rank Solution START */

class Rectangle
{
public:
    int width, height;
    void display()
    {
        cout << width << " " << height << "\n";
    }
};

class RectangleArea : public Rectangle
{
public:
    void read_input()
    {
        cin >> width;
        cin >> height;
    }
    void display()
    {
        cout << width * height << "\n";
    }
};

/* Rectangle Area in C++ - Hacker Rank Solution END */
