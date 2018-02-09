print('   -------------')
print('   | * | * | * |')
print('   | * | * | * |')
print('   | * | * | * |')
print('   -------------')
p1=input('player1 choose x or o:')
if p1=='x':
    p2='o'
else:
    p2='x'
draw=1
mat=[['*','*','*'],
     ['*','*','*'],
     ['*','*','*']]

for step in range (9):

  row=int(input('enter no  of row:'))
  column=int(input('enter no of column:'))
  
  
  if(mat[row][column]=='x') or (mat[row][column]=='o'):
     print('invalid')
     row=int(input('enter row:'))
     column=int(input('enter column:'))

  
  if step%2==0:
      mat[row][column]=p1
  else:
      mat[row][column]=p2
  for row in range (3):
      print('   -------------')
      print('   |',mat[row][0],'|',mat[row][1],'|',mat[row][2],'|')
  print('   -------------')
  if step>=4:
     for row in range(3):
         if (mat[row][0]==mat[row][1]==mat[row][2]==p1)or (mat[0][row]==mat[1][row]==mat[2][row]==p1)or(mat[0][0]==mat[1][1]==mat[2][2]==p1)or(mat[0][2]==mat[1][1]==mat[2][0]==p1):
             print('player1 is the winner xD')
             draw=0
             break
         elif (mat[row][0]==mat[row][1]==mat[row][2]==p2)or (mat[0][row]==mat[1][row]==mat[2][row]==p2)or(mat[0][0]==mat[1][1]==mat[2][2]==p2)or(mat[0][2]==mat[1][1]==mat[2][0]==p2):
             print('player2 is the winner xD')
             draw=0
             break
     if draw==0:
         break
if draw==1:
    print('its a draw')
