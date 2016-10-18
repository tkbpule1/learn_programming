Rails.application.routes.draw do

  get '/vim' => 'vim#index'

  get '/vim/normal' => 'vim#normal'

  get '/vim/text_objects' => 'vim#text_objects'

  get '/vim/small_changes' => 'vim#small_changes'
  
  get '/vim/command' => 'vim#command'

  get '/vim/basics' => 'vim#basics'

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

  get '/php' => 'php#index'

  get '/php/basics' => 'php#basics'

  get '/php/objects' => 'php#objects'

  get '/javascript' => 'javascript#index'

  get '/javascript/learn' => 'javascript#learn'

  get 'welcome/index'

  # The priority is based upon order of creation: first created -> highest priority.
  # See how all your routes lay out with "rake routes".

  # You can have the root of your site routed with "root"
  root 'welcome#index'

  # Example of regular route:
  #   get 'products/:id' => 'catalog#view'

  # Example of named route that can be invoked with purchase_url(id: product.id)
  #   get 'products/:id/purchase' => 'catalog#purchase', as: :purchase

  # Example resource route (maps HTTP verbs to controller actions automatically):
  #   resources :products

  # Example resource route with options:
  #   resources :products do
  #     member do
  #       get 'short'
  #       post 'toggle'
  #     end
  #
  #     collection do
  #       get 'sold'
  #     end
  #   end

  # Example resource route with sub-resources:
  #   resources :products do
  #     resources :comments, :sales
  #     resource :seller
  #   end

  # Example resource route with more complex sub-resources:
  #   resources :products do
  #     resources :comments
  #     resources :sales do
  #       get 'recent', on: :collection
  #     end
  #   end

  # Example resource route with concerns:
  #   concern :toggleable do
  #     post 'toggle'
  #   end
  #   resources :posts, concerns: :toggleable
  #   resources :photos, concerns: :toggleable

  # Example resource route within a namespace:
  #   namespace :admin do
  #     # Directs /admin/products/* to Admin::ProductsController
  #     # (app/controllers/admin/products_controller.rb)
  #     resources :products
  #   end
end
