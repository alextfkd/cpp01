cat Makefile | sed "s/a/A/g" | cat > outfile.expected
./ft_sed Makefile a A 
diff Makefile .replace outfile.expected 

cat Makefile | sed "s/ / /g" | cat > outfile2.expected
./ft_sed Makefile " " " " 
diff Makefile .replace outfile2.expected 

cat Makefile | sed "s/ /  /g" | cat > outfile3.expected
./ft_sed Makefile " " "  " 
diff Makefile .replace outfile3.expected 
