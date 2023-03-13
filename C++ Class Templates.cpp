
#define cin                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cin
#define concatenate add

/*Write the class AddElements here*/
template <typename T>
class AddElements
{
private:
    T element;

public:
    AddElements(T element)
    {
        this->element = element;
    }
    T add(T a) { return element + a; }
};
int start_up()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';
