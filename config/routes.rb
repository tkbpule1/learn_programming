Rails.application.routes.draw do

  root 'welcome#index'

  get '/html' => 'html#index'

  get '/html/basics' => 'html#basics'

  get '/vim' => 'vim#index'

  get '/vim/normal' => 'vim#normal'

  get '/vim/text_objects' => 'vim#text_objects'

  get '/vim/buffer' => 'vim#buffer'

  get '/vim/windows' => 'vim#windows'

  get '/vim/sessions' => 'vim#sessions'

  get '/vim/recording' => 'vim#recording'

  get '/vim/marks' => 'vim#marks'

  get '/vim/small_changes' => 'vim#small_changes'
  
  get '/vim/command' => 'vim#command'

  get '/vim/substitution' => 'vim#substitution'

  get '/vim/global' => 'vim#global'

  get '/vim/movement' => 'vim#movement'

  get '/vim/tmux' => 'vim#tmux'

  get '/bash' => 'bash#index'

  get '/bash/basics' => 'bash#basics'

  get '/bash/shabang' => 'bash#shabang'

  get '/bash/invoke' => 'bash#invoke'

  get '/bash/admin' => 'bash#admin'

  get '/bash/conditionals' => 'bash#conditionals'

  get '/git' => 'git#index'

  get '/git/installation' => 'git#installation'

  get '/git/setup' => 'git#setup'

  get '/rails' => 'rails#index'

  get '/rails/overview' => 'rails#overview'

  get '/rails/installation' => 'rails#installation'

  get '/rails/setup' => 'rails#setup'

  get '/rails/create' => 'rails#create'

  get '/rails/notes' => 'rails#notes'

  get '/ruby' => 'ruby#index'

  get '/c' => 'c#index'

  get '/c/basics' => 'c#basics'

  get '/c/types' => 'c#types'

  get '/c/iostream' => 'c#iostream'

  get '/c/array' => 'c#array'

  get '/c/carray' => 'c#carray'

  get '/c/loops' => 'c#loops'

  get '/c/conditionals' => 'c#conditionals'

  get '/c/examples' => 'c#examples'

  get '/cpp' => 'cpp#index'

  get '/cpp/basics' => 'cpp#basics'

  get '/cpp/examples' => 'cpp#examples'

  get '/cpp/exercises' => 'cpp#exercises'

  get '/cpp/iostream' => 'cpp#iostream'

  get '/cpp/control_structures' => 'cpp#control_structures'

  get '/cpp/functions' => 'cpp#functions'

  get '/cpp/inheritance' => 'cpp#inheritance'

  get'/cpp/linked_lists' => 'cpp#linked_lists'

  get '/linux' => 'linux#index'

  get '/linux/basics' => 'linux#basics'

  get '/linux/file_system' => 'linux#file_system'

  get '/linux/help_pages' => 'linux#help_pages'

  get '/php' => 'php#index'

  get '/php/basics' => 'php#basics'

  get '/php/objects' => 'php#objects'

  get '/javascript' => 'javascript#index'

  get '/javascript/learn' => 'javascript#learn'

end
