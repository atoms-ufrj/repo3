```bash
\attention { attention text }
\author { list of authors }
\important { important text }
\note { text }
@param // [in]", "[in,out]", and "[out]"
```

```bash
\param p
\result { description of the result value }
\return { description of the return value }
\throw <exception-object> { exception description }
\todo { paragraph describing what is to be done }
\bug
\warning
\category
===================
@var  datatype $varname
Description
====================
```

```bash
\b <word> // bold
\c <word>  // using a typewriter font // also \p <word>
\a <word> // put word in italics (also \e)

\arg \c AlignLeft left alignment. (\arg is to grant that \c is for the full line)
\li \c AlignLeft left alignment. // as before


\f$ // in-text formula.
\f( // in-text formula.// it will not explicitly open the math-mode in {\LaTeX} .
\f[ //  long formula that is displayed centered on a separate line.

\image html application.jpg
 ```

```cpp
/*!
 *  \brief     Pretty nice class.
 *  \details   This class is used to demonstrate a number of section commands.
 *  \author    John Doe
 *  \version   4.1a
 *  \date      1990-2011
 *  \bug       Not all memory is freed when deleting an object of this class.
 *  \warning   Improper use can crash your application
 *  \copyright GNU Public License.
 */
class SomeNiceClass {};
```