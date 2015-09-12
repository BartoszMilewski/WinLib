#if !defined (ALGO_H)
#define ALGO_H
//------------------------------------
// (c) Reliable Software 1998
//------------------------------------

template<class In, class Out, class Pred>
Out copy_if (In first, In last, Out res, Pred p)
{
    while (first != last)
    {
        if (p (*first))
        {
            *res = *first;
            ++res;
        }
        ++first;
    }
    return res;
}

#endif
