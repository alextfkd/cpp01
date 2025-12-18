cat infile | sed "s/a/A/g" | cat > outfile.expected
./ft_sed infile a A 
diff infile.replace outfile.expected 

cat infile | sed "s/ / /g" | cat > outfile2.expected
./ft_sed infile " " " " 
diff infile.replace outfile2.expected 

cat infile | sed "s/ /  /g" | cat > outfile3.expected
./ft_sed infile " " "  " 
diff infile.replace outfile3.expected 