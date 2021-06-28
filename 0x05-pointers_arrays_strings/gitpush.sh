git add .

echo 'Enter the commit message:'
read commitMessage

git commit -m "$commitMessage"

# echo 'Enter the name of the branch:'
#read branch

#git Push Origin $branch

git push

read
