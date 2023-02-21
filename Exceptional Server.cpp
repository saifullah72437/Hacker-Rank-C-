

try
{
    cout << Server::compute(A, B) << endl;
}
catch (std::bad_alloc &error)
{
    cout << "Not enough memory" << endl;
}
catch (std::exception &error)
{
    cout << "Exception: " << error.what() << endl;
}
catch (...)
{
    cout << "Other Exception" << endl;
}
/* ------------*/
