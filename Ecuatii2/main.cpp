#include &lt;fstream&gt;
#include &lt;string&gt;
#include &lt;iomanip&gt;
using namespace std;
typedef string::iterator stit;
 
 
ifstream fin(&quot;ecuatii2.in&quot;);
ofstream fout(&quot;ecuatii2.out&quot;);
 
struct vars {
    int nrx;
    int sum;
 
    vars()
    {
        sum = 0;
        nrx = 0;
    }
};
 
string linie;
unsigned short n;
vars st, dr;
 
int GetNum( stit&amp; it );
void Getthisl( stit&amp; it );
void Getthisr( stit&amp; it );
void Write( double&amp; xtot, double&amp; sumtot );
 
int main()
{
	
    fin &gt;&gt; n; getline(fin, linie);
 
    while ( n-- )
    {
        linie.clear();
        getline(fin, linie);
 
        st.nrx = 0;
        st.sum = 0;
        dr.sum = 0;
        dr.nrx = 0;
 
        stit it = linie.begin();
 
        Getthisl( it );
 
        ++it;
        Getthisr ( it );
/*
        cout &lt;&lt; st.sum &lt;&lt; ' ' &lt;&lt; dr.sum &lt;&lt; '\n';
        cout &lt;&lt; st.nrx &lt;&lt; ' ' &lt;&lt; dr.nrx &lt;&lt; '\n' &lt;&lt; '\n';
*/
        double xtot = st.nrx - dr.nrx; double sumtot = st.sum - dr.sum;
        Write(xtot, sumtot);
 
    }
 
    return 0;
}
 
void Write( double&amp; xtot, double&amp; sumtot )
{
    sumtot *= -1;
    //cout &lt;&lt; xtot &lt;&lt; ' ' &lt;&lt; sumtot &lt;&lt; '\n';
    if ( sumtot == 0 &amp;&amp; xtot == 0  )
        fout &lt;&lt; &quot;infinit&quot; &lt;&lt; '\n';
    else
        if ( xtot == 0 )
        fout &lt;&lt; &quot;imposibil&quot; &lt;&lt; '\n';
    else
    {
        if ( xtot &lt; 0 )
        {
            xtot *= -1;
            sumtot *= -1;
        }
        if ( sumtot/xtot == -0 )
            fout &lt;&lt; &quot;0.0000&quot; &lt;&lt; '\n';
        else
        fout &lt;&lt; setprecision(4) &lt;&lt; fixed &lt;&lt; sumtot/xtot &lt;&lt; '\n';
    }
}
 
void Getthisr ( stit&amp; it )
{
    while ( *it != '=' &amp;&amp; *it != '\0' )
    {
        if ( *it == 'x' )
            dr.nrx++;
        else
            if ( *it == '-' )
            {
                int num;
                num = GetNum( ++it );
                if ( *it == 'x' )
                {
                    if ( num == 0 ) dr.nrx--;
                    else
                    dr.nrx -= num;
                }
                else
                    dr.sum -= num;
            }
        else
            if ( *it == '+' )
            {
                int num; num = GetNum ( ++it );
                if ( *it == 'x' )
                {
                    if ( num == 0 ) dr.nrx++;
                    else
                    dr.nrx += num;
                }
                else
                    dr.sum += num;
            }
        else
            {
                int num = GetNum ( it );
                if ( *it == 'x' )
                {
                    if ( num == 0 ) dr.nrx++;
                    else
                    dr.nrx += num;
                }
                else
                    dr.sum += num;
            }
        if ( *it != '+' &amp;&amp; *it != '-' &amp;&amp; *it != '=' &amp;&amp; *it != '\0' )
            ++it;
    }
 
}

void Getthisl( stit&amp; it )
{
    while ( *it != '=' &amp;&amp; *it != '\0' )
    {
        if ( *it == 'x' )
            st.nrx++;
        else
            if ( *it == '-' )
            {
                short num;
                num = GetNum( ++it );
                if ( *it == 'x' )
                {
                    if ( num == 0 ) st.nrx--;
                    else
                    st.nrx -= num;
                }
                else
                    st.sum -= num;
            }
        else
            if ( *it == '+' )
            {
                int num; num = GetNum ( ++it );
                if ( *it == 'x' )
                {
                    if ( num == 0 ) st.nrx++;
                    else
                    st.nrx += num;
                }
                else
                    st.sum += num;
            }
        else
            {
                int num = GetNum ( it );
                if ( *it == 'x' )
                {
                    if ( num == 0 ) st.nrx++;
                    else
                    st.nrx += num;
                }
                else
                    st.sum += num;
            }
        if ( *it != '+' &amp;&amp; *it != '-' &amp;&amp; *it != '=' &amp;&amp; *it != '\0' )
            ++it;
    }
}
 
int GetNum( stit&amp; it )
{
    int num = 0;
 
    while ( isdigit( *it ) )
    {
        num = num * 10 + ( *it - '0' );
        ++it;
    }
 
    if ( *it == 'x' || *it == '-' || *it == '+' || *it == '=' || *it == '\0' )
        return num;
 
    ++it;
}
